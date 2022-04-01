﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
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
  class AWS_SERVICECATALOG_API UpdateTagOptionResult
  {
  public:
    UpdateTagOptionResult();
    UpdateTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the TagOption.</p>
     */
    inline const TagOptionDetail& GetTagOptionDetail() const{ return m_tagOptionDetail; }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline void SetTagOptionDetail(const TagOptionDetail& value) { m_tagOptionDetail = value; }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline void SetTagOptionDetail(TagOptionDetail&& value) { m_tagOptionDetail = std::move(value); }

    /**
     * <p>Information about the TagOption.</p>
     */
    inline UpdateTagOptionResult& WithTagOptionDetail(const TagOptionDetail& value) { SetTagOptionDetail(value); return *this;}

    /**
     * <p>Information about the TagOption.</p>
     */
    inline UpdateTagOptionResult& WithTagOptionDetail(TagOptionDetail&& value) { SetTagOptionDetail(std::move(value)); return *this;}

  private:

    TagOptionDetail m_tagOptionDetail;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
