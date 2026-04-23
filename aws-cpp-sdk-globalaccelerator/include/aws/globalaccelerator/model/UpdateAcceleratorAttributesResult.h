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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/AcceleratorAttributes.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult
  {
  public:
    UpdateAcceleratorAttributesResult();
    UpdateAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline const AcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }

    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline void SetAcceleratorAttributes(const AcceleratorAttributes& value) { m_acceleratorAttributes = value; }

    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline void SetAcceleratorAttributes(AcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }

    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline UpdateAcceleratorAttributesResult& WithAcceleratorAttributes(const AcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}

    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline UpdateAcceleratorAttributesResult& WithAcceleratorAttributes(AcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}

  private:

    AcceleratorAttributes m_acceleratorAttributes;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
