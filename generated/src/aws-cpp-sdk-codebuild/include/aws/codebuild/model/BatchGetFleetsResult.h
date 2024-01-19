/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Fleet.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetFleetsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetFleetsResult();
    AWS_CODEBUILD_API BatchGetFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline const Aws::Vector<Fleet>& GetFleets() const{ return m_fleets; }

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline void SetFleets(const Aws::Vector<Fleet>& value) { m_fleets = value; }

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline void SetFleets(Aws::Vector<Fleet>&& value) { m_fleets = std::move(value); }

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline BatchGetFleetsResult& WithFleets(const Aws::Vector<Fleet>& value) { SetFleets(value); return *this;}

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline BatchGetFleetsResult& WithFleets(Aws::Vector<Fleet>&& value) { SetFleets(std::move(value)); return *this;}

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline BatchGetFleetsResult& AddFleets(const Fleet& value) { m_fleets.push_back(value); return *this; }

    /**
     * <p>Information about the requested compute fleets.</p>
     */
    inline BatchGetFleetsResult& AddFleets(Fleet&& value) { m_fleets.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetsNotFound() const{ return m_fleetsNotFound; }

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline void SetFleetsNotFound(const Aws::Vector<Aws::String>& value) { m_fleetsNotFound = value; }

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline void SetFleetsNotFound(Aws::Vector<Aws::String>&& value) { m_fleetsNotFound = std::move(value); }

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline BatchGetFleetsResult& WithFleetsNotFound(const Aws::Vector<Aws::String>& value) { SetFleetsNotFound(value); return *this;}

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline BatchGetFleetsResult& WithFleetsNotFound(Aws::Vector<Aws::String>&& value) { SetFleetsNotFound(std::move(value)); return *this;}

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline BatchGetFleetsResult& AddFleetsNotFound(const Aws::String& value) { m_fleetsNotFound.push_back(value); return *this; }

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline BatchGetFleetsResult& AddFleetsNotFound(Aws::String&& value) { m_fleetsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of compute fleets for which information could not be found.</p>
     */
    inline BatchGetFleetsResult& AddFleetsNotFound(const char* value) { m_fleetsNotFound.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Fleet> m_fleets;

    Aws::Vector<Aws::String> m_fleetsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
