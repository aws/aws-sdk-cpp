/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/iot/model/ThingTypeMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  /**
   * <p>The output for the DescribeThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingTypeResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThingTypeResult
  {
  public:
    AWS_IOT_API DescribeThingTypeResult() = default;
    AWS_IOT_API DescribeThingTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    DescribeThingTypeResult& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ID.</p>
     */
    inline const Aws::String& GetThingTypeId() const { return m_thingTypeId; }
    template<typename ThingTypeIdT = Aws::String>
    void SetThingTypeId(ThingTypeIdT&& value) { m_thingTypeIdHasBeenSet = true; m_thingTypeId = std::forward<ThingTypeIdT>(value); }
    template<typename ThingTypeIdT = Aws::String>
    DescribeThingTypeResult& WithThingTypeId(ThingTypeIdT&& value) { SetThingTypeId(std::forward<ThingTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const { return m_thingTypeArn; }
    template<typename ThingTypeArnT = Aws::String>
    void SetThingTypeArn(ThingTypeArnT&& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = std::forward<ThingTypeArnT>(value); }
    template<typename ThingTypeArnT = Aws::String>
    DescribeThingTypeResult& WithThingTypeArn(ThingTypeArnT&& value) { SetThingTypeArn(std::forward<ThingTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, a list of searchable thing attribute names, and MQTT5
     * configuration.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const { return m_thingTypeProperties; }
    template<typename ThingTypePropertiesT = ThingTypeProperties>
    void SetThingTypeProperties(ThingTypePropertiesT&& value) { m_thingTypePropertiesHasBeenSet = true; m_thingTypeProperties = std::forward<ThingTypePropertiesT>(value); }
    template<typename ThingTypePropertiesT = ThingTypeProperties>
    DescribeThingTypeResult& WithThingTypeProperties(ThingTypePropertiesT&& value) { SetThingTypeProperties(std::forward<ThingTypePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const { return m_thingTypeMetadata; }
    template<typename ThingTypeMetadataT = ThingTypeMetadata>
    void SetThingTypeMetadata(ThingTypeMetadataT&& value) { m_thingTypeMetadataHasBeenSet = true; m_thingTypeMetadata = std::forward<ThingTypeMetadataT>(value); }
    template<typename ThingTypeMetadataT = ThingTypeMetadata>
    DescribeThingTypeResult& WithThingTypeMetadata(ThingTypeMetadataT&& value) { SetThingTypeMetadata(std::forward<ThingTypeMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThingTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::String m_thingTypeId;
    bool m_thingTypeIdHasBeenSet = false;

    Aws::String m_thingTypeArn;
    bool m_thingTypeArnHasBeenSet = false;

    ThingTypeProperties m_thingTypeProperties;
    bool m_thingTypePropertiesHasBeenSet = false;

    ThingTypeMetadata m_thingTypeMetadata;
    bool m_thingTypeMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
