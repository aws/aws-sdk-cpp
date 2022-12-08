/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BasicLayout.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object to store union of different versions of layout content.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/LayoutContent">AWS
   * API Reference</a></p>
   */
  class LayoutContent
  {
  public:
    AWS_CONNECTCASES_API LayoutContent();
    AWS_CONNECTCASES_API LayoutContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline const BasicLayout& GetBasic() const{ return m_basic; }

    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline bool BasicHasBeenSet() const { return m_basicHasBeenSet; }

    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline void SetBasic(const BasicLayout& value) { m_basicHasBeenSet = true; m_basic = value; }

    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline void SetBasic(BasicLayout&& value) { m_basicHasBeenSet = true; m_basic = std::move(value); }

    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline LayoutContent& WithBasic(const BasicLayout& value) { SetBasic(value); return *this;}

    /**
     * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
     * the top panel and More Info tab of Cases user interface.</p>
     */
    inline LayoutContent& WithBasic(BasicLayout&& value) { SetBasic(std::move(value)); return *this;}

  private:

    BasicLayout m_basic;
    bool m_basicHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
