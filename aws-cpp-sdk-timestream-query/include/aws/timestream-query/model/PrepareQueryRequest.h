/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class PrepareQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API PrepareQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PrepareQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline PrepareQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline PrepareQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The Timestream query string that you want to use as a prepared statement.
     * Parameter names can be specified in the query string <code>@</code> character
     * followed by an identifier. </p>
     */
    inline PrepareQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>By setting this value to <code>true</code>, Timestream will only validate
     * that the query string is a valid Timestream query, and not store the prepared
     * query for later use.</p>
     */
    inline bool GetValidateOnly() const{ return m_validateOnly; }

    /**
     * <p>By setting this value to <code>true</code>, Timestream will only validate
     * that the query string is a valid Timestream query, and not store the prepared
     * query for later use.</p>
     */
    inline bool ValidateOnlyHasBeenSet() const { return m_validateOnlyHasBeenSet; }

    /**
     * <p>By setting this value to <code>true</code>, Timestream will only validate
     * that the query string is a valid Timestream query, and not store the prepared
     * query for later use.</p>
     */
    inline void SetValidateOnly(bool value) { m_validateOnlyHasBeenSet = true; m_validateOnly = value; }

    /**
     * <p>By setting this value to <code>true</code>, Timestream will only validate
     * that the query string is a valid Timestream query, and not store the prepared
     * query for later use.</p>
     */
    inline PrepareQueryRequest& WithValidateOnly(bool value) { SetValidateOnly(value); return *this;}

  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    bool m_validateOnly;
    bool m_validateOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
