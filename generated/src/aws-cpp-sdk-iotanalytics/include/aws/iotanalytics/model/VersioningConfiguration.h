/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the versioning of dataset contents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/VersioningConfiguration">AWS
   * API Reference</a></p>
   */
  class VersioningConfiguration
  {
  public:
    AWS_IOTANALYTICS_API VersioningConfiguration();
    AWS_IOTANALYTICS_API VersioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API VersioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If true, unlimited versions of dataset contents are kept.</p>
     */
    inline bool GetUnlimited() const{ return m_unlimited; }

    /**
     * <p>If true, unlimited versions of dataset contents are kept.</p>
     */
    inline bool UnlimitedHasBeenSet() const { return m_unlimitedHasBeenSet; }

    /**
     * <p>If true, unlimited versions of dataset contents are kept.</p>
     */
    inline void SetUnlimited(bool value) { m_unlimitedHasBeenSet = true; m_unlimited = value; }

    /**
     * <p>If true, unlimited versions of dataset contents are kept.</p>
     */
    inline VersioningConfiguration& WithUnlimited(bool value) { SetUnlimited(value); return *this;}


    /**
     * <p>How many versions of dataset contents are kept. The <code>unlimited</code>
     * parameter must be <code>false</code>.</p>
     */
    inline int GetMaxVersions() const{ return m_maxVersions; }

    /**
     * <p>How many versions of dataset contents are kept. The <code>unlimited</code>
     * parameter must be <code>false</code>.</p>
     */
    inline bool MaxVersionsHasBeenSet() const { return m_maxVersionsHasBeenSet; }

    /**
     * <p>How many versions of dataset contents are kept. The <code>unlimited</code>
     * parameter must be <code>false</code>.</p>
     */
    inline void SetMaxVersions(int value) { m_maxVersionsHasBeenSet = true; m_maxVersions = value; }

    /**
     * <p>How many versions of dataset contents are kept. The <code>unlimited</code>
     * parameter must be <code>false</code>.</p>
     */
    inline VersioningConfiguration& WithMaxVersions(int value) { SetMaxVersions(value); return *this;}

  private:

    bool m_unlimited;
    bool m_unlimitedHasBeenSet = false;

    int m_maxVersions;
    bool m_maxVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
