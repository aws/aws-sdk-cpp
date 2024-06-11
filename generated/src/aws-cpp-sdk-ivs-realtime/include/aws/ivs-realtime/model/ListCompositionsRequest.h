﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/IvsrealtimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

  /**
   */
  class ListCompositionsRequest : public IvsrealtimeRequest
  {
  public:
    AWS_IVSREALTIME_API ListCompositionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCompositions"; }

    AWS_IVSREALTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Filters the Composition list to match the specified EncoderConfiguration
     * attached to at least one of its output.</p>
     */
    inline const Aws::String& GetFilterByEncoderConfigurationArn() const{ return m_filterByEncoderConfigurationArn; }
    inline bool FilterByEncoderConfigurationArnHasBeenSet() const { return m_filterByEncoderConfigurationArnHasBeenSet; }
    inline void SetFilterByEncoderConfigurationArn(const Aws::String& value) { m_filterByEncoderConfigurationArnHasBeenSet = true; m_filterByEncoderConfigurationArn = value; }
    inline void SetFilterByEncoderConfigurationArn(Aws::String&& value) { m_filterByEncoderConfigurationArnHasBeenSet = true; m_filterByEncoderConfigurationArn = std::move(value); }
    inline void SetFilterByEncoderConfigurationArn(const char* value) { m_filterByEncoderConfigurationArnHasBeenSet = true; m_filterByEncoderConfigurationArn.assign(value); }
    inline ListCompositionsRequest& WithFilterByEncoderConfigurationArn(const Aws::String& value) { SetFilterByEncoderConfigurationArn(value); return *this;}
    inline ListCompositionsRequest& WithFilterByEncoderConfigurationArn(Aws::String&& value) { SetFilterByEncoderConfigurationArn(std::move(value)); return *this;}
    inline ListCompositionsRequest& WithFilterByEncoderConfigurationArn(const char* value) { SetFilterByEncoderConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the Composition list to match the specified Stage ARN.</p>
     */
    inline const Aws::String& GetFilterByStageArn() const{ return m_filterByStageArn; }
    inline bool FilterByStageArnHasBeenSet() const { return m_filterByStageArnHasBeenSet; }
    inline void SetFilterByStageArn(const Aws::String& value) { m_filterByStageArnHasBeenSet = true; m_filterByStageArn = value; }
    inline void SetFilterByStageArn(Aws::String&& value) { m_filterByStageArnHasBeenSet = true; m_filterByStageArn = std::move(value); }
    inline void SetFilterByStageArn(const char* value) { m_filterByStageArnHasBeenSet = true; m_filterByStageArn.assign(value); }
    inline ListCompositionsRequest& WithFilterByStageArn(const Aws::String& value) { SetFilterByStageArn(value); return *this;}
    inline ListCompositionsRequest& WithFilterByStageArn(Aws::String&& value) { SetFilterByStageArn(std::move(value)); return *this;}
    inline ListCompositionsRequest& WithFilterByStageArn(const char* value) { SetFilterByStageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return. Default: 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCompositionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first Composition to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCompositionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCompositionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCompositionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_filterByEncoderConfigurationArn;
    bool m_filterByEncoderConfigurationArnHasBeenSet = false;

    Aws::String m_filterByStageArn;
    bool m_filterByStageArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
