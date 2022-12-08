/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AppInstance.h>
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
namespace Chime
{
namespace Model
{
  class DescribeAppInstanceResult
  {
  public:
    AWS_CHIME_API DescribeAppInstanceResult();
    AWS_CHIME_API DescribeAppInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API DescribeAppInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline const AppInstance& GetAppInstance() const{ return m_appInstance; }

    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline void SetAppInstance(const AppInstance& value) { m_appInstance = value; }

    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline void SetAppInstance(AppInstance&& value) { m_appInstance = std::move(value); }

    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline DescribeAppInstanceResult& WithAppInstance(const AppInstance& value) { SetAppInstance(value); return *this;}

    /**
     * <p>The ARN, metadata, created and last-updated timestamps, and the name of the
     * <code>AppInstance</code>. All timestamps use epoch milliseconds.</p>
     */
    inline DescribeAppInstanceResult& WithAppInstance(AppInstance&& value) { SetAppInstance(std::move(value)); return *this;}

  private:

    AppInstance m_appInstance;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
