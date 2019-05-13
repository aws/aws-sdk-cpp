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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>

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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about the versioning of data set contents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/VersioningConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API VersioningConfiguration
  {
  public:
    VersioningConfiguration();
    VersioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    VersioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If true, unlimited versions of data set contents will be kept.</p>
     */
    inline bool GetUnlimited() const{ return m_unlimited; }

    /**
     * <p>If true, unlimited versions of data set contents will be kept.</p>
     */
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }

    /**
     * <p>If true, unlimited versions of data set contents will be kept.</p>
     */
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }

    /**
     * <p>If true, unlimited versions of data set contents will be kept.</p>
     */
    inline VersioningConfiguration& WithUnlimited(bool value) { SetUnlimited(value); return *this;}


    /**
     * <p>How many versions of data set contents will be kept. The "unlimited"
     * parameter must be false.</p>
     */
    inline int GetMaxVersions() const{ return m_maxVersions; }

    /**
     * <p>How many versions of data set contents will be kept. The "unlimited"
     * parameter must be false.</p>
     */
    inline bool MaxVersionsHasBeenSet() const { return m_maxVersionsHasBeenSet; }

    /**
     * <p>How many versions of data set contents will be kept. The "unlimited"
     * parameter must be false.</p>
     */
    inline void SetMaxVersions(int value) { m_maxVersionsHasBeenSet = true; m_maxVersions = value; }

    /**
     * <p>How many versions of data set contents will be kept. The "unlimited"
     * parameter must be false.</p>
     */
    inline VersioningConfiguration& WithMaxVersions(int value) { SetMaxVersions(value); return *this;}

  private:

    bool m_unlimited;
    bool m_unlimitedHasBeenSet;

    int m_maxVersions;
    bool m_maxVersionsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
