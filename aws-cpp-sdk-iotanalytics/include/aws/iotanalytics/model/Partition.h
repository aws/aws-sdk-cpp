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
   * <p> A partition dimension defined by an attribute. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/Partition">AWS
   * API Reference</a></p>
   */
  class Partition
  {
  public:
    AWS_IOTANALYTICS_API Partition();
    AWS_IOTANALYTICS_API Partition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Partition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline Partition& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline Partition& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p> The name of the attribute that defines a partition dimension. </p>
     */
    inline Partition& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
