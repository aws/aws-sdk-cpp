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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TerminologyProperties.h>
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
namespace Translate
{
namespace Model
{
  class AWS_TRANSLATE_API ImportTerminologyResult
  {
  public:
    ImportTerminologyResult();
    ImportTerminologyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportTerminologyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline const TerminologyProperties& GetTerminologyProperties() const{ return m_terminologyProperties; }

    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline void SetTerminologyProperties(const TerminologyProperties& value) { m_terminologyProperties = value; }

    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline void SetTerminologyProperties(TerminologyProperties&& value) { m_terminologyProperties = std::move(value); }

    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline ImportTerminologyResult& WithTerminologyProperties(const TerminologyProperties& value) { SetTerminologyProperties(value); return *this;}

    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline ImportTerminologyResult& WithTerminologyProperties(TerminologyProperties&& value) { SetTerminologyProperties(std::move(value)); return *this;}

  private:

    TerminologyProperties m_terminologyProperties;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
