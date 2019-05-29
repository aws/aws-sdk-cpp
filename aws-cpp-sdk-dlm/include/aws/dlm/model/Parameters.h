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
   * <p>Optional parameters that can be added to the policy. The set of valid
   * parameters depends on the combination of <code>policyType</code> and
   * <code>resourceType</code> values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Parameters">AWS API
   * Reference</a></p>
   */
  class AWS_DLM_API Parameters
  {
  public:
    Parameters();
    Parameters(Aws::Utils::Json::JsonView jsonValue);
    Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When executing an EBS Snapshot Management – Instance policy, execute all
     * CreateSnapshots calls with the <code>excludeBootVolume</code> set to the
     * supplied field. Defaults to false. Only valid for EBS Snapshot Management –
     * Instance policies.</p>
     */
    inline bool GetExcludeBootVolume() const{ return m_excludeBootVolume; }

    /**
     * <p>When executing an EBS Snapshot Management – Instance policy, execute all
     * CreateSnapshots calls with the <code>excludeBootVolume</code> set to the
     * supplied field. Defaults to false. Only valid for EBS Snapshot Management –
     * Instance policies.</p>
     */
    inline bool ExcludeBootVolumeHasBeenSet() const { return m_excludeBootVolumeHasBeenSet; }

    /**
     * <p>When executing an EBS Snapshot Management – Instance policy, execute all
     * CreateSnapshots calls with the <code>excludeBootVolume</code> set to the
     * supplied field. Defaults to false. Only valid for EBS Snapshot Management –
     * Instance policies.</p>
     */
    inline void SetExcludeBootVolume(bool value) { m_excludeBootVolumeHasBeenSet = true; m_excludeBootVolume = value; }

    /**
     * <p>When executing an EBS Snapshot Management – Instance policy, execute all
     * CreateSnapshots calls with the <code>excludeBootVolume</code> set to the
     * supplied field. Defaults to false. Only valid for EBS Snapshot Management –
     * Instance policies.</p>
     */
    inline Parameters& WithExcludeBootVolume(bool value) { SetExcludeBootVolume(value); return *this;}

  private:

    bool m_excludeBootVolume;
    bool m_excludeBootVolumeHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
