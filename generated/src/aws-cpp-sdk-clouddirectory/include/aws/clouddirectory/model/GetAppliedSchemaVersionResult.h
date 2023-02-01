/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class GetAppliedSchemaVersionResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult();
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetAppliedSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const{ return m_appliedSchemaArn; }

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline void SetAppliedSchemaArn(const Aws::String& value) { m_appliedSchemaArn = value; }

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline void SetAppliedSchemaArn(Aws::String&& value) { m_appliedSchemaArn = std::move(value); }

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline void SetAppliedSchemaArn(const char* value) { m_appliedSchemaArn.assign(value); }

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline GetAppliedSchemaVersionResult& WithAppliedSchemaArn(const Aws::String& value) { SetAppliedSchemaArn(value); return *this;}

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline GetAppliedSchemaVersionResult& WithAppliedSchemaArn(Aws::String&& value) { SetAppliedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>Current applied schema ARN, including the minor version in use if one was
     * provided.</p>
     */
    inline GetAppliedSchemaVersionResult& WithAppliedSchemaArn(const char* value) { SetAppliedSchemaArn(value); return *this;}

  private:

    Aws::String m_appliedSchemaArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
