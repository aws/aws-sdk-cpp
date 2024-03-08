/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
    AWS_DATAZONE_API SingleSignOn();
    AWS_DATAZONE_API SingleSignOn(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SingleSignOn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline const AuthType& GetType() const{ return m_type; }

    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline void SetType(const AuthType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline void SetType(AuthType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline SingleSignOn& WithType(const AuthType& value) { SetType(value); return *this;}

    /**
     * <p>The type of single sign-on in Amazon DataZone.</p>
     */
    inline SingleSignOn& WithType(AuthType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline const UserAssignment& GetUserAssignment() const{ return m_userAssignment; }

    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline bool UserAssignmentHasBeenSet() const { return m_userAssignmentHasBeenSet; }

    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline void SetUserAssignment(const UserAssignment& value) { m_userAssignmentHasBeenSet = true; m_userAssignment = value; }

    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline void SetUserAssignment(UserAssignment&& value) { m_userAssignmentHasBeenSet = true; m_userAssignment = std::move(value); }

    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline SingleSignOn& WithUserAssignment(const UserAssignment& value) { SetUserAssignment(value); return *this;}

    /**
     * <p>The single sign-on user assignment in Amazon DataZone.</p>
     */
    inline SingleSignOn& WithUserAssignment(UserAssignment&& value) { SetUserAssignment(std::move(value)); return *this;}

  private:

    AuthType m_type;
    bool m_typeHasBeenSet = false;

    UserAssignment m_userAssignment;
    bool m_userAssignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
