/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A successful request identified by the unique client token.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/SuccessfulRequest">AWS
   * API Reference</a></p>
   */
  class SuccessfulRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API SuccessfulRequest();
    AWS_CONNECTCAMPAIGNS_API SuccessfulRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API SuccessfulRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline SuccessfulRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline SuccessfulRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline SuccessfulRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline SuccessfulRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline SuccessfulRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline SuccessfulRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
