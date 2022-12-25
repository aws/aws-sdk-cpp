/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class CopyProductResult
  {
  public:
    AWS_SERVICECATALOG_API CopyProductResult();
    AWS_SERVICECATALOG_API CopyProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CopyProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline const Aws::String& GetCopyProductToken() const{ return m_copyProductToken; }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(const Aws::String& value) { m_copyProductToken = value; }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(Aws::String&& value) { m_copyProductToken = std::move(value); }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline void SetCopyProductToken(const char* value) { m_copyProductToken.assign(value); }

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(const Aws::String& value) { SetCopyProductToken(value); return *this;}

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(Aws::String&& value) { SetCopyProductToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to track the progress of the operation.</p>
     */
    inline CopyProductResult& WithCopyProductToken(const char* value) { SetCopyProductToken(value); return *this;}

  private:

    Aws::String m_copyProductToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
