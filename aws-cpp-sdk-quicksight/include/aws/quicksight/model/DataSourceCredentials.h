/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CredentialPair.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Data source credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DataSourceCredentials
  {
  public:
    DataSourceCredentials();
    DataSourceCredentials(Aws::Utils::Json::JsonView jsonValue);
    DataSourceCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Credential pair.</p>
     */
    inline const CredentialPair& GetCredentialPair() const{ return m_credentialPair; }

    /**
     * <p>Credential pair.</p>
     */
    inline bool CredentialPairHasBeenSet() const { return m_credentialPairHasBeenSet; }

    /**
     * <p>Credential pair.</p>
     */
    inline void SetCredentialPair(const CredentialPair& value) { m_credentialPairHasBeenSet = true; m_credentialPair = value; }

    /**
     * <p>Credential pair.</p>
     */
    inline void SetCredentialPair(CredentialPair&& value) { m_credentialPairHasBeenSet = true; m_credentialPair = std::move(value); }

    /**
     * <p>Credential pair.</p>
     */
    inline DataSourceCredentials& WithCredentialPair(const CredentialPair& value) { SetCredentialPair(value); return *this;}

    /**
     * <p>Credential pair.</p>
     */
    inline DataSourceCredentials& WithCredentialPair(CredentialPair&& value) { SetCredentialPair(std::move(value)); return *this;}

  private:

    CredentialPair m_credentialPair;
    bool m_credentialPairHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
