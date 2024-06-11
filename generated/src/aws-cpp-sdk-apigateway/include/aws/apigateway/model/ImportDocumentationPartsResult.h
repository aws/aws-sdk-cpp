/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A collection of the imported DocumentationPart identifiers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationPartIds">AWS
   * API Reference</a></p>
   */
  class ImportDocumentationPartsResult
  {
  public:
    AWS_APIGATEWAY_API ImportDocumentationPartsResult();
    AWS_APIGATEWAY_API ImportDocumentationPartsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API ImportDocumentationPartsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the returned documentation part identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }
    inline ImportDocumentationPartsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline ImportDocumentationPartsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline ImportDocumentationPartsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }
    inline ImportDocumentationPartsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }
    inline ImportDocumentationPartsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of warning messages reported during import of documentation parts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }
    inline ImportDocumentationPartsResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}
    inline ImportDocumentationPartsResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}
    inline ImportDocumentationPartsResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }
    inline ImportDocumentationPartsResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }
    inline ImportDocumentationPartsResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportDocumentationPartsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportDocumentationPartsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportDocumentationPartsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::Vector<Aws::String> m_warnings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
