/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The output of the CreateThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingTypeResponse">AWS
   * API Reference</a></p>
   */
  class CreateThingTypeResult
  {
  public:
    AWS_IOT_API CreateThingTypeResult() = default;
    AWS_IOT_API CreateThingTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateThingTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const { return m_thingTypeName; }
    template<typename ThingTypeNameT = Aws::String>
    void SetThingTypeName(ThingTypeNameT&& value) { m_thingTypeNameHasBeenSet = true; m_thingTypeName = std::forward<ThingTypeNameT>(value); }
    template<typename ThingTypeNameT = Aws::String>
    CreateThingTypeResult& WithThingTypeName(ThingTypeNameT&& value) { SetThingTypeName(std::forward<ThingTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeArn() const { return m_thingTypeArn; }
    template<typename ThingTypeArnT = Aws::String>
    void SetThingTypeArn(ThingTypeArnT&& value) { m_thingTypeArnHasBeenSet = true; m_thingTypeArn = std::forward<ThingTypeArnT>(value); }
    template<typename ThingTypeArnT = Aws::String>
    CreateThingTypeResult& WithThingTypeArn(ThingTypeArnT&& value) { SetThingTypeArn(std::forward<ThingTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ID.</p>
     */
    inline const Aws::String& GetThingTypeId() const { return m_thingTypeId; }
    template<typename ThingTypeIdT = Aws::String>
    void SetThingTypeId(ThingTypeIdT&& value) { m_thingTypeIdHasBeenSet = true; m_thingTypeId = std::forward<ThingTypeIdT>(value); }
    template<typename ThingTypeIdT = Aws::String>
    CreateThingTypeResult& WithThingTypeId(ThingTypeIdT&& value) { SetThingTypeId(std::forward<ThingTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateThingTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeName;
    bool m_thingTypeNameHasBeenSet = false;

    Aws::String m_thingTypeArn;
    bool m_thingTypeArnHasBeenSet = false;

    Aws::String m_thingTypeId;
    bool m_thingTypeIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
