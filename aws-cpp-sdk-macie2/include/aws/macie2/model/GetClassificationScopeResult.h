/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/S3ClassificationScope.h>
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
namespace Macie2
{
namespace Model
{
  class GetClassificationScopeResult
  {
  public:
    AWS_MACIE2_API GetClassificationScopeResult();
    AWS_MACIE2_API GetClassificationScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetClassificationScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the classification scope.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classification scope.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the classification scope.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the classification scope.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classification scope.</p>
     */
    inline GetClassificationScopeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The S3 buckets that are excluded from automated sensitive data discovery.</p>
     */
    inline const S3ClassificationScope& GetS3() const{ return m_s3; }

    /**
     * <p>The S3 buckets that are excluded from automated sensitive data discovery.</p>
     */
    inline void SetS3(const S3ClassificationScope& value) { m_s3 = value; }

    /**
     * <p>The S3 buckets that are excluded from automated sensitive data discovery.</p>
     */
    inline void SetS3(S3ClassificationScope&& value) { m_s3 = std::move(value); }

    /**
     * <p>The S3 buckets that are excluded from automated sensitive data discovery.</p>
     */
    inline GetClassificationScopeResult& WithS3(const S3ClassificationScope& value) { SetS3(value); return *this;}

    /**
     * <p>The S3 buckets that are excluded from automated sensitive data discovery.</p>
     */
    inline GetClassificationScopeResult& WithS3(S3ClassificationScope&& value) { SetS3(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    S3ClassificationScope m_s3;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
