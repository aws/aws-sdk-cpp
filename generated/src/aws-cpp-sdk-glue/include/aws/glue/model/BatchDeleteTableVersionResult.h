﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableVersionError.h>
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
namespace Glue
{
namespace Model
{
  class BatchDeleteTableVersionResult
  {
  public:
    AWS_GLUE_API BatchDeleteTableVersionResult();
    AWS_GLUE_API BatchDeleteTableVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchDeleteTableVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors encountered while trying to delete the specified table
     * versions.</p>
     */
    inline const Aws::Vector<TableVersionError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<TableVersionError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<TableVersionError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteTableVersionResult& WithErrors(const Aws::Vector<TableVersionError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteTableVersionResult& WithErrors(Aws::Vector<TableVersionError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteTableVersionResult& AddErrors(const TableVersionError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteTableVersionResult& AddErrors(TableVersionError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteTableVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteTableVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteTableVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableVersionError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
