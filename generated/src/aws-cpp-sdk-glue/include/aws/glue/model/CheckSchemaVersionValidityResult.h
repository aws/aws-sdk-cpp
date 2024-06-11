﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class CheckSchemaVersionValidityResult
  {
  public:
    AWS_GLUE_API CheckSchemaVersionValidityResult();
    AWS_GLUE_API CheckSchemaVersionValidityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CheckSchemaVersionValidityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Return true, if the schema is valid and false otherwise.</p>
     */
    inline bool GetValid() const{ return m_valid; }
    inline void SetValid(bool value) { m_valid = value; }
    inline CheckSchemaVersionValidityResult& WithValid(bool value) { SetValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A validation failure error message.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline CheckSchemaVersionValidityResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline CheckSchemaVersionValidityResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline CheckSchemaVersionValidityResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CheckSchemaVersionValidityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CheckSchemaVersionValidityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CheckSchemaVersionValidityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_valid;

    Aws::String m_error;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
