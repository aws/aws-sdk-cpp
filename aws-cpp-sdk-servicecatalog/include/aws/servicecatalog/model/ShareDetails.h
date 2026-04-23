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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ShareError.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about the portfolio share operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ShareDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ShareDetails
  {
  public:
    ShareDetails();
    ShareDetails(Aws::Utils::Json::JsonView jsonValue);
    ShareDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulShares() const{ return m_successfulShares; }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline bool SuccessfulSharesHasBeenSet() const { return m_successfulSharesHasBeenSet; }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline void SetSuccessfulShares(const Aws::Vector<Aws::String>& value) { m_successfulSharesHasBeenSet = true; m_successfulShares = value; }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline void SetSuccessfulShares(Aws::Vector<Aws::String>&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares = std::move(value); }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline ShareDetails& WithSuccessfulShares(const Aws::Vector<Aws::String>& value) { SetSuccessfulShares(value); return *this;}

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline ShareDetails& WithSuccessfulShares(Aws::Vector<Aws::String>&& value) { SetSuccessfulShares(std::move(value)); return *this;}

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline ShareDetails& AddSuccessfulShares(const Aws::String& value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(value); return *this; }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline ShareDetails& AddSuccessfulShares(Aws::String&& value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(std::move(value)); return *this; }

    /**
     * <p>List of accounts for whom the operation succeeded.</p>
     */
    inline ShareDetails& AddSuccessfulShares(const char* value) { m_successfulSharesHasBeenSet = true; m_successfulShares.push_back(value); return *this; }


    /**
     * <p>List of errors.</p>
     */
    inline const Aws::Vector<ShareError>& GetShareErrors() const{ return m_shareErrors; }

    /**
     * <p>List of errors.</p>
     */
    inline bool ShareErrorsHasBeenSet() const { return m_shareErrorsHasBeenSet; }

    /**
     * <p>List of errors.</p>
     */
    inline void SetShareErrors(const Aws::Vector<ShareError>& value) { m_shareErrorsHasBeenSet = true; m_shareErrors = value; }

    /**
     * <p>List of errors.</p>
     */
    inline void SetShareErrors(Aws::Vector<ShareError>&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors = std::move(value); }

    /**
     * <p>List of errors.</p>
     */
    inline ShareDetails& WithShareErrors(const Aws::Vector<ShareError>& value) { SetShareErrors(value); return *this;}

    /**
     * <p>List of errors.</p>
     */
    inline ShareDetails& WithShareErrors(Aws::Vector<ShareError>&& value) { SetShareErrors(std::move(value)); return *this;}

    /**
     * <p>List of errors.</p>
     */
    inline ShareDetails& AddShareErrors(const ShareError& value) { m_shareErrorsHasBeenSet = true; m_shareErrors.push_back(value); return *this; }

    /**
     * <p>List of errors.</p>
     */
    inline ShareDetails& AddShareErrors(ShareError&& value) { m_shareErrorsHasBeenSet = true; m_shareErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_successfulShares;
    bool m_successfulSharesHasBeenSet;

    Aws::Vector<ShareError> m_shareErrors;
    bool m_shareErrorsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
