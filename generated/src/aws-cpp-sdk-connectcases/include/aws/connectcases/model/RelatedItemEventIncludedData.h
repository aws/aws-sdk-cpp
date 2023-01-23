/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Details of what related item data is published through the case event
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemEventIncludedData">AWS
   * API Reference</a></p>
   */
  class RelatedItemEventIncludedData
  {
  public:
    AWS_CONNECTCASES_API RelatedItemEventIncludedData();
    AWS_CONNECTCASES_API RelatedItemEventIncludedData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RelatedItemEventIncludedData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline bool GetIncludeContent() const{ return m_includeContent; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline bool IncludeContentHasBeenSet() const { return m_includeContentHasBeenSet; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline void SetIncludeContent(bool value) { m_includeContentHasBeenSet = true; m_includeContent = value; }

    /**
     * <p>Details of what related item data is published through the case event
     * stream.</p>
     */
    inline RelatedItemEventIncludedData& WithIncludeContent(bool value) { SetIncludeContent(value); return *this;}

  private:

    bool m_includeContent;
    bool m_includeContentHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
