﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/TemplateResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about all the message templates that are associated with
   * your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplatesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API TemplatesResponse
  {
  public:
    TemplatesResponse();
    TemplatesResponse(Aws::Utils::Json::JsonView jsonValue);
    TemplatesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline const Aws::Vector<TemplateResponse>& GetItem() const{ return m_item; }

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline void SetItem(const Aws::Vector<TemplateResponse>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline void SetItem(Aws::Vector<TemplateResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline TemplatesResponse& WithItem(const Aws::Vector<TemplateResponse>& value) { SetItem(value); return *this;}

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline TemplatesResponse& WithItem(Aws::Vector<TemplateResponse>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline TemplatesResponse& AddItem(const TemplateResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * <p>An array of responses, one for each message template that's associated with
     * your Amazon Pinpoint account and meets any filter criteria that you specified in
     * the request.</p>
     */
    inline TemplatesResponse& AddItem(TemplateResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplatesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplatesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplatesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TemplateResponse> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
