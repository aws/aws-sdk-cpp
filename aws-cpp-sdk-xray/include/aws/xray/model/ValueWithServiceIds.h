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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/AnnotationValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a segment annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ValueWithServiceIds">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API ValueWithServiceIds
  {
  public:
    ValueWithServiceIds();
    ValueWithServiceIds(Aws::Utils::Json::JsonView jsonValue);
    ValueWithServiceIds& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Values of the annotation.</p>
     */
    inline const AnnotationValue& GetAnnotationValue() const{ return m_annotationValue; }

    /**
     * <p>Values of the annotation.</p>
     */
    inline bool AnnotationValueHasBeenSet() const { return m_annotationValueHasBeenSet; }

    /**
     * <p>Values of the annotation.</p>
     */
    inline void SetAnnotationValue(const AnnotationValue& value) { m_annotationValueHasBeenSet = true; m_annotationValue = value; }

    /**
     * <p>Values of the annotation.</p>
     */
    inline void SetAnnotationValue(AnnotationValue&& value) { m_annotationValueHasBeenSet = true; m_annotationValue = std::move(value); }

    /**
     * <p>Values of the annotation.</p>
     */
    inline ValueWithServiceIds& WithAnnotationValue(const AnnotationValue& value) { SetAnnotationValue(value); return *this;}

    /**
     * <p>Values of the annotation.</p>
     */
    inline ValueWithServiceIds& WithAnnotationValue(AnnotationValue&& value) { SetAnnotationValue(std::move(value)); return *this;}


    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const{ return m_serviceIds; }

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline void SetServiceIds(const Aws::Vector<ServiceId>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline void SetServiceIds(Aws::Vector<ServiceId>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline ValueWithServiceIds& WithServiceIds(const Aws::Vector<ServiceId>& value) { SetServiceIds(value); return *this;}

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline ValueWithServiceIds& WithServiceIds(Aws::Vector<ServiceId>&& value) { SetServiceIds(std::move(value)); return *this;}

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline ValueWithServiceIds& AddServiceIds(const ServiceId& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline ValueWithServiceIds& AddServiceIds(ServiceId&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }

  private:

    AnnotationValue m_annotationValue;
    bool m_annotationValueHasBeenSet;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
