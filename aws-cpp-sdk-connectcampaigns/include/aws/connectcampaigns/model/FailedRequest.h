/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/FailureCode.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>A failed request identified by the unique client token.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/FailedRequest">AWS
   * API Reference</a></p>
   */
  class FailedRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API FailedRequest();
    AWS_CONNECTCAMPAIGNS_API FailedRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API FailedRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline FailedRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline FailedRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline FailedRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const FailureCode& GetFailureCode() const{ return m_failureCode; }

    
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    
    inline void SetFailureCode(const FailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    
    inline void SetFailureCode(FailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    
    inline FailedRequest& WithFailureCode(const FailureCode& value) { SetFailureCode(value); return *this;}

    
    inline FailedRequest& WithFailureCode(FailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline FailedRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline FailedRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline FailedRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
