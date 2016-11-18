/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/Compute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains information about the compute type of a WorkSpace bundle.</p>
   */
  class AWS_WORKSPACES_API ComputeType
  {
  public:
    ComputeType();
    ComputeType(const Aws::Utils::Json::JsonValue& jsonValue);
    ComputeType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the compute type for the bundle.</p>
     */
    inline const Compute& GetName() const{ return m_name; }

    /**
     * <p>The name of the compute type for the bundle.</p>
     */
    inline void SetName(const Compute& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the compute type for the bundle.</p>
     */
    inline void SetName(Compute&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the compute type for the bundle.</p>
     */
    inline ComputeType& WithName(const Compute& value) { SetName(value); return *this;}

    /**
     * <p>The name of the compute type for the bundle.</p>
     */
    inline ComputeType& WithName(Compute&& value) { SetName(value); return *this;}

  private:
    Compute m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
