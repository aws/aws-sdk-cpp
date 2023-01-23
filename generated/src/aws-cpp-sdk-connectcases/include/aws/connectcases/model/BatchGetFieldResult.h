/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldError.h>
#include <aws/connectcases/model/GetFieldResponse.h>
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
  class BatchGetFieldResult
  {
  public:
    AWS_CONNECTCASES_API BatchGetFieldResult();
    AWS_CONNECTCASES_API BatchGetFieldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API BatchGetFieldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of field errors. </p>
     */
    inline const Aws::Vector<FieldError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of field errors. </p>
     */
    inline void SetErrors(const Aws::Vector<FieldError>& value) { m_errors = value; }

    /**
     * <p>A list of field errors. </p>
     */
    inline void SetErrors(Aws::Vector<FieldError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchGetFieldResult& WithErrors(const Aws::Vector<FieldError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchGetFieldResult& WithErrors(Aws::Vector<FieldError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchGetFieldResult& AddErrors(const FieldError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of field errors. </p>
     */
    inline BatchGetFieldResult& AddErrors(FieldError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of detailed field information. </p>
     */
    inline const Aws::Vector<GetFieldResponse>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of detailed field information. </p>
     */
    inline void SetFields(const Aws::Vector<GetFieldResponse>& value) { m_fields = value; }

    /**
     * <p>A list of detailed field information. </p>
     */
    inline void SetFields(Aws::Vector<GetFieldResponse>&& value) { m_fields = std::move(value); }

    /**
     * <p>A list of detailed field information. </p>
     */
    inline BatchGetFieldResult& WithFields(const Aws::Vector<GetFieldResponse>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of detailed field information. </p>
     */
    inline BatchGetFieldResult& WithFields(Aws::Vector<GetFieldResponse>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of detailed field information. </p>
     */
    inline BatchGetFieldResult& AddFields(const GetFieldResponse& value) { m_fields.push_back(value); return *this; }

    /**
     * <p>A list of detailed field information. </p>
     */
    inline BatchGetFieldResult& AddFields(GetFieldResponse&& value) { m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FieldError> m_errors;

    Aws::Vector<GetFieldResponse> m_fields;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
