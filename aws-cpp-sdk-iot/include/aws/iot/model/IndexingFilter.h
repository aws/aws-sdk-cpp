/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Provides additional filters for specific data sources. Named shadow is the
   * only data source that currently supports and requires a filter. To add named
   * shadows to your fleet indexing configuration, set
   * <code>namedShadowIndexingMode</code> to be <code>ON</code> and specify your
   * shadow names in <code>filter</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IndexingFilter">AWS
   * API Reference</a></p>
   */
  class IndexingFilter
  {
  public:
    AWS_IOT_API IndexingFilter();
    AWS_IOT_API IndexingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IndexingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNamedShadowNames() const{ return m_namedShadowNames; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline bool NamedShadowNamesHasBeenSet() const { return m_namedShadowNamesHasBeenSet; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline void SetNamedShadowNames(const Aws::Vector<Aws::String>& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames = value; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline void SetNamedShadowNames(Aws::Vector<Aws::String>&& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames = std::move(value); }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& WithNamedShadowNames(const Aws::Vector<Aws::String>& value) { SetNamedShadowNames(value); return *this;}

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& WithNamedShadowNames(Aws::Vector<Aws::String>&& value) { SetNamedShadowNames(std::move(value)); return *this;}

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(const Aws::String& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(value); return *this; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(Aws::String&& value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The shadow names that you select to index. The default maximum number of
     * shadow names for indexing is 10. To increase the limit, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot_device_management.html#fleet-indexing-limits">Amazon
     * Web Services IoT Device Management Quotas</a> in the <i>Amazon Web Services
     * General Reference</i>. </p>
     */
    inline IndexingFilter& AddNamedShadowNames(const char* value) { m_namedShadowNamesHasBeenSet = true; m_namedShadowNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_namedShadowNames;
    bool m_namedShadowNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
