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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetParametersRequest : public SSMRequest
  {
  public:
    GetParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParameters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline GetParametersRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline GetParametersRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline GetParametersRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline GetParametersRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>Names of the parameters for which you want to query information.</p>
     */
    inline GetParametersRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>Return decrypted secure string value. Return decrypted values for secure
     * string parameters. This flag is ignored for String and StringList parameter
     * types.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }

    /**
     * <p>Return decrypted secure string value. Return decrypted values for secure
     * string parameters. This flag is ignored for String and StringList parameter
     * types.</p>
     */
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }

    /**
     * <p>Return decrypted secure string value. Return decrypted values for secure
     * string parameters. This flag is ignored for String and StringList parameter
     * types.</p>
     */
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }

    /**
     * <p>Return decrypted secure string value. Return decrypted values for secure
     * string parameters. This flag is ignored for String and StringList parameter
     * types.</p>
     */
    inline GetParametersRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;

    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
