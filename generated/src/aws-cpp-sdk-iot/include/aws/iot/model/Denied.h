/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ImplicitDeny.h>
#include <aws/iot/model/ExplicitDeny.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Contains information that denied the authorization.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Denied">AWS API
   * Reference</a></p>
   */
  class Denied
  {
  public:
    AWS_IOT_API Denied();
    AWS_IOT_API Denied(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Denied& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline const ImplicitDeny& GetImplicitDeny() const{ return m_implicitDeny; }
    inline bool ImplicitDenyHasBeenSet() const { return m_implicitDenyHasBeenSet; }
    inline void SetImplicitDeny(const ImplicitDeny& value) { m_implicitDenyHasBeenSet = true; m_implicitDeny = value; }
    inline void SetImplicitDeny(ImplicitDeny&& value) { m_implicitDenyHasBeenSet = true; m_implicitDeny = std::move(value); }
    inline Denied& WithImplicitDeny(const ImplicitDeny& value) { SetImplicitDeny(value); return *this;}
    inline Denied& WithImplicitDeny(ImplicitDeny&& value) { SetImplicitDeny(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline const ExplicitDeny& GetExplicitDeny() const{ return m_explicitDeny; }
    inline bool ExplicitDenyHasBeenSet() const { return m_explicitDenyHasBeenSet; }
    inline void SetExplicitDeny(const ExplicitDeny& value) { m_explicitDenyHasBeenSet = true; m_explicitDeny = value; }
    inline void SetExplicitDeny(ExplicitDeny&& value) { m_explicitDenyHasBeenSet = true; m_explicitDeny = std::move(value); }
    inline Denied& WithExplicitDeny(const ExplicitDeny& value) { SetExplicitDeny(value); return *this;}
    inline Denied& WithExplicitDeny(ExplicitDeny&& value) { SetExplicitDeny(std::move(value)); return *this;}
    ///@}
  private:

    ImplicitDeny m_implicitDeny;
    bool m_implicitDenyHasBeenSet = false;

    ExplicitDeny m_explicitDeny;
    bool m_explicitDenyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
