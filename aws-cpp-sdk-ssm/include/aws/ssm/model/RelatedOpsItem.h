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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An OpsItems that shares something in common with the current OpsItem. For
   * example, related OpsItems can include OpsItems with similar error messages,
   * impacted resources, or statuses for the impacted resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/RelatedOpsItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API RelatedOpsItem
  {
  public:
    RelatedOpsItem();
    RelatedOpsItem(Aws::Utils::Json::JsonView jsonValue);
    RelatedOpsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline RelatedOpsItem& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline RelatedOpsItem& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of an OpsItem related to the current OpsItem.</p>
     */
    inline RelatedOpsItem& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}

  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
