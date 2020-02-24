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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/INDTaxDocuments.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The tax documents required in your AWS Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/TaxDocuments">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API TaxDocuments
  {
  public:
    TaxDocuments();
    TaxDocuments(Aws::Utils::Json::JsonView jsonValue);
    TaxDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline const INDTaxDocuments& GetIND() const{ return m_iND; }

    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline bool INDHasBeenSet() const { return m_iNDHasBeenSet; }

    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline void SetIND(const INDTaxDocuments& value) { m_iNDHasBeenSet = true; m_iND = value; }

    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline void SetIND(INDTaxDocuments&& value) { m_iNDHasBeenSet = true; m_iND = std::move(value); }

    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline TaxDocuments& WithIND(const INDTaxDocuments& value) { SetIND(value); return *this;}

    /**
     * <p>The tax documents required in AWS Regions in India.</p>
     */
    inline TaxDocuments& WithIND(INDTaxDocuments&& value) { SetIND(std::move(value)); return *this;}

  private:

    INDTaxDocuments m_iND;
    bool m_iNDHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
