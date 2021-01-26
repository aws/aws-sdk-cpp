/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
