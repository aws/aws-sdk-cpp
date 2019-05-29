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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ComplianceStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Exclusive to findings that are generated as the result of a check run against
   * a specific rule in a supported standard (for example, CIS AWS Foundations).
   * Contains compliance-related finding details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Compliance">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Compliance
  {
  public:
    Compliance();
    Compliance(Aws::Utils::Json::JsonView jsonValue);
    Compliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The result of a compliance check.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The result of a compliance check.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The result of a compliance check.</p>
     */
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The result of a compliance check.</p>
     */
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The result of a compliance check.</p>
     */
    inline Compliance& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The result of a compliance check.</p>
     */
    inline Compliance& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ComplianceStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
