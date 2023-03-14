/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldOptionError.h>
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
namespace ConnectCases
{
namespace Model
{
  class BatchPutFieldOptionsResult
  {
  public:
    AWS_CONNECTCASES_API BatchPutFieldOptionsResult();
    AWS_CONNECTCASES_API BatchPutFieldOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API BatchPutFieldOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of field errors. </p>
     */
    inline const Aws::Vector<FieldOptionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of field errors. </p>
     */
    inline void SetErrors(const Aws::Vector<FieldOptionError>& value) { m_errors = value; }

    /**
     * <p>A list of field errors. </p>
     */
    inline void SetErrors(Aws::Vector<FieldOptionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchPutFieldOptionsResult& WithErrors(const Aws::Vector<FieldOptionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchPutFieldOptionsResult& WithErrors(Aws::Vector<FieldOptionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchPutFieldOptionsResult& AddErrors(const FieldOptionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchPutFieldOptionsResult& AddErrors(FieldOptionError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutFieldOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutFieldOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutFieldOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FieldOptionError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
