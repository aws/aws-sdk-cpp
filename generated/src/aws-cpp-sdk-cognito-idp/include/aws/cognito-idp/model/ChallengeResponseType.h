/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeName.h>
#include <aws/cognito-idp/model/ChallengeResponse.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The challenge response type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChallengeResponseType">AWS
   * API Reference</a></p>
   */
  class ChallengeResponseType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType();
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ChallengeResponseType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The challenge name.</p>
     */
    inline const ChallengeName& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name.</p>
     */
    inline bool ChallengeNameHasBeenSet() const { return m_challengeNameHasBeenSet; }

    /**
     * <p>The challenge name.</p>
     */
    inline void SetChallengeName(const ChallengeName& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The challenge name.</p>
     */
    inline void SetChallengeName(ChallengeName&& value) { m_challengeNameHasBeenSet = true; m_challengeName = std::move(value); }

    /**
     * <p>The challenge name.</p>
     */
    inline ChallengeResponseType& WithChallengeName(const ChallengeName& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name.</p>
     */
    inline ChallengeResponseType& WithChallengeName(ChallengeName&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The challenge response.</p>
     */
    inline const ChallengeResponse& GetChallengeResponse() const{ return m_challengeResponse; }

    /**
     * <p>The challenge response.</p>
     */
    inline bool ChallengeResponseHasBeenSet() const { return m_challengeResponseHasBeenSet; }

    /**
     * <p>The challenge response.</p>
     */
    inline void SetChallengeResponse(const ChallengeResponse& value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = value; }

    /**
     * <p>The challenge response.</p>
     */
    inline void SetChallengeResponse(ChallengeResponse&& value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = std::move(value); }

    /**
     * <p>The challenge response.</p>
     */
    inline ChallengeResponseType& WithChallengeResponse(const ChallengeResponse& value) { SetChallengeResponse(value); return *this;}

    /**
     * <p>The challenge response.</p>
     */
    inline ChallengeResponseType& WithChallengeResponse(ChallengeResponse&& value) { SetChallengeResponse(std::move(value)); return *this;}

  private:

    ChallengeName m_challengeName;
    bool m_challengeNameHasBeenSet = false;

    ChallengeResponse m_challengeResponse;
    bool m_challengeResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
