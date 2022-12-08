/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information about the dataset whose content generation triggers the new
   * dataset content generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TriggeringDataset">AWS
   * API Reference</a></p>
   */
  class TriggeringDataset
  {
  public:
    AWS_IOTANALYTICS_API TriggeringDataset();
    AWS_IOTANALYTICS_API TriggeringDataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API TriggeringDataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline TriggeringDataset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline TriggeringDataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset whose content generation triggers the new dataset
     * content generation.</p>
     */
    inline TriggeringDataset& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
