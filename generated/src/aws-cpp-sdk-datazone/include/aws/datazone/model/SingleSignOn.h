/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AuthType.h>
#include <aws/datazone/model/UserAssignment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The single sign-on details in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SingleSignOn">AWS
   * API Reference</a></p>
   */
  class SingleSignOn
  {
  public:
    AWS_DATAZONE_API SingleSignOn() = default;
    AWS_DATAZONE_API SingleSignOn(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SingleSignOn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IDC instance.</p>
     */
    inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    template<typename IdcInstanceArnT = Aws::String>
    void SetIdcInstanceArn(IdcInstanceArnT&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::forward<IdcInstanceArnT>(value); }
    template<typename IdcInstanceArnT = Aws::String>
    SingleSignOn& WithIdcInstanceArn(IdcInstanceArnT&& value) { SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline AuthType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AuthType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SingleSignOn& WithType(AuthType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline UserAssignment GetUserAssignment() const { return m_userAssignment; }
    inline bool UserAssignmentHasBeenSet() const { return m_userAssignmentHasBeenSet; }
    inline void SetUserAssignment(UserAssignment value) { m_userAssignmentHasBeenSet = true; m_userAssignment = value; }
    inline SingleSignOn& WithUserAssignment(UserAssignment value) { SetUserAssignment(value); return *this;}
    ///@}
  private:

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    AuthType m_type{AuthType::NOT_SET};
    bool m_typeHasBeenSet = false;

    UserAssignment m_userAssignment{UserAssignment::NOT_SET};
    bool m_userAssignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
