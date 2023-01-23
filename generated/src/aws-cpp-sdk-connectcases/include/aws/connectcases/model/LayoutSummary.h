/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object for the summarized details of the layout.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/LayoutSummary">AWS
   * API Reference</a></p>
   */
  class LayoutSummary
  {
  public:
    AWS_CONNECTCASES_API LayoutSummary();
    AWS_CONNECTCASES_API LayoutSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const{ return m_layoutArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline bool LayoutArnHasBeenSet() const { return m_layoutArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline void SetLayoutArn(const Aws::String& value) { m_layoutArnHasBeenSet = true; m_layoutArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline void SetLayoutArn(Aws::String&& value) { m_layoutArnHasBeenSet = true; m_layoutArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline void SetLayoutArn(const char* value) { m_layoutArnHasBeenSet = true; m_layoutArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline LayoutSummary& WithLayoutArn(const Aws::String& value) { SetLayoutArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline LayoutSummary& WithLayoutArn(Aws::String&& value) { SetLayoutArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline LayoutSummary& WithLayoutArn(const char* value) { SetLayoutArn(value); return *this;}


    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline bool LayoutIdHasBeenSet() const { return m_layoutIdHasBeenSet; }

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline void SetLayoutId(const Aws::String& value) { m_layoutIdHasBeenSet = true; m_layoutId = value; }

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline void SetLayoutId(Aws::String&& value) { m_layoutIdHasBeenSet = true; m_layoutId = std::move(value); }

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline void SetLayoutId(const char* value) { m_layoutIdHasBeenSet = true; m_layoutId.assign(value); }

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline LayoutSummary& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline LayoutSummary& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline LayoutSummary& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}


    /**
     * <p>The name of the layout.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the layout.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the layout.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the layout.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the layout.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the layout.</p>
     */
    inline LayoutSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the layout.</p>
     */
    inline LayoutSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the layout.</p>
     */
    inline LayoutSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_layoutArn;
    bool m_layoutArnHasBeenSet = false;

    Aws::String m_layoutId;
    bool m_layoutIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
