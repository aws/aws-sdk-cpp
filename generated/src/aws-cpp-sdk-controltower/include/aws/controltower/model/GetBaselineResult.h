/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{
  class GetBaselineResult
  {
  public:
    AWS_CONTROLTOWER_API GetBaselineResult();
    AWS_CONTROLTOWER_API GetBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The baseline ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The baseline ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The baseline ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The baseline ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The baseline ARN.</p>
     */
    inline GetBaselineResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The baseline ARN.</p>
     */
    inline GetBaselineResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The baseline ARN.</p>
     */
    inline GetBaselineResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the baseline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the baseline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the baseline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the baseline.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the baseline.</p>
     */
    inline GetBaselineResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the baseline.</p>
     */
    inline GetBaselineResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the baseline.</p>
     */
    inline GetBaselineResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline GetBaselineResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline GetBaselineResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the baseline.</p>
     */
    inline GetBaselineResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBaselineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBaselineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBaselineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
