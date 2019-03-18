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
#include <aws/dlm/DLM_EXPORTS.h>

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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the number of snapshots to keep for each EBS volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/RetainRule">AWS API
   * Reference</a></p>
   */
  class AWS_DLM_API RetainRule
  {
  public:
    RetainRule();
    RetainRule(Aws::Utils::Json::JsonView jsonValue);
    RetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of snapshots to keep for each volume, up to a maximum of 1000.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of snapshots to keep for each volume, up to a maximum of 1000.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of snapshots to keep for each volume, up to a maximum of 1000.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of snapshots to keep for each volume, up to a maximum of 1000.</p>
     */
    inline RetainRule& WithCount(int value) { SetCount(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
