﻿/**
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
  class ApplySchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ApplySchemaResult();
    AWS_CLOUDDIRECTORY_API ApplySchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ApplySchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetAppliedSchemaArn() const{ return m_appliedSchemaArn; }

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(const Aws::String& value) { m_appliedSchemaArn = value; }

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(Aws::String&& value) { m_appliedSchemaArn = std::move(value); }

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline void SetAppliedSchemaArn(const char* value) { m_appliedSchemaArn.assign(value); }

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithAppliedSchemaArn(const Aws::String& value) { SetAppliedSchemaArn(value); return *this;}

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithAppliedSchemaArn(Aws::String&& value) { SetAppliedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The applied schema ARN that is associated with the copied schema in the
     * <a>Directory</a>. You can use this ARN to describe the schema information
     * applied on this directory. For more information, see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithAppliedSchemaArn(const char* value) { SetAppliedSchemaArn(value); return *this;}


    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that is associated with the <a>Directory</a>. For more information,
     * see <a>arns</a>.</p>
     */
    inline ApplySchemaResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ApplySchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ApplySchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ApplySchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appliedSchemaArn;

    Aws::String m_directoryArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
