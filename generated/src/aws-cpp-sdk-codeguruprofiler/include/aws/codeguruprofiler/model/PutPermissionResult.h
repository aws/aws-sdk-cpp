/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the
   * <code>putPermissionResponse</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermissionResponse">AWS
   * API Reference</a></p>
   */
  class PutPermissionResult
  {
  public:
    AWS_CODEGURUPROFILER_API PutPermissionResult();
    AWS_CODEGURUPROFILER_API PutPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API PutPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline PutPermissionResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline PutPermissionResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p> The JSON-formatted resource-based policy on the profiling group that
     * includes the added permissions. </p>
     */
    inline PutPermissionResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline PutPermissionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline PutPermissionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy that includes the added permissions. The JSON-formatted
     * policy is in the <code>policy</code> element of the response. </p>
     */
    inline PutPermissionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_policy;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
