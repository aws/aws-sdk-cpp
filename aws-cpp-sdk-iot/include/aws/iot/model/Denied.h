/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API Denied
  {
  public:
    Denied();
    Denied(Aws::Utils::Json::JsonView jsonValue);
    Denied& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline const ImplicitDeny& GetImplicitDeny() const{ return m_implicitDeny; }

    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline bool ImplicitDenyHasBeenSet() const { return m_implicitDenyHasBeenSet; }

    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline void SetImplicitDeny(const ImplicitDeny& value) { m_implicitDenyHasBeenSet = true; m_implicitDeny = value; }

    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline void SetImplicitDeny(ImplicitDeny&& value) { m_implicitDenyHasBeenSet = true; m_implicitDeny = std::move(value); }

    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline Denied& WithImplicitDeny(const ImplicitDeny& value) { SetImplicitDeny(value); return *this;}

    /**
     * <p>Information that implicitly denies the authorization. When a policy doesn't
     * explicitly deny or allow an action on a resource it is considered an implicit
     * deny.</p>
     */
    inline Denied& WithImplicitDeny(ImplicitDeny&& value) { SetImplicitDeny(std::move(value)); return *this;}


    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline const ExplicitDeny& GetExplicitDeny() const{ return m_explicitDeny; }

    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline bool ExplicitDenyHasBeenSet() const { return m_explicitDenyHasBeenSet; }

    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline void SetExplicitDeny(const ExplicitDeny& value) { m_explicitDenyHasBeenSet = true; m_explicitDeny = value; }

    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline void SetExplicitDeny(ExplicitDeny&& value) { m_explicitDenyHasBeenSet = true; m_explicitDeny = std::move(value); }

    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline Denied& WithExplicitDeny(const ExplicitDeny& value) { SetExplicitDeny(value); return *this;}

    /**
     * <p>Information that explicitly denies the authorization. </p>
     */
    inline Denied& WithExplicitDeny(ExplicitDeny&& value) { SetExplicitDeny(std::move(value)); return *this;}

  private:

    ImplicitDeny m_implicitDeny;
    bool m_implicitDenyHasBeenSet;

    ExplicitDeny m_explicitDeny;
    bool m_explicitDenyHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
