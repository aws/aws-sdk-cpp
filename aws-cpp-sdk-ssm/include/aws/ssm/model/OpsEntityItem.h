/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The OpsData summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsEntityItem">AWS
   * API Reference</a></p>
   */
  class OpsEntityItem
  {
  public:
    AWS_SSM_API OpsEntityItem();
    AWS_SSM_API OpsEntityItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsEntityItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline void SetCaptureTime(const Aws::String& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline void SetCaptureTime(Aws::String&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::move(value); }

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline void SetCaptureTime(const char* value) { m_captureTimeHasBeenSet = true; m_captureTime.assign(value); }

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline OpsEntityItem& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline OpsEntityItem& WithCaptureTime(Aws::String&& value) { SetCaptureTime(std::move(value)); return *this;}

    /**
     * <p>The time the OpsData was captured.</p>
     */
    inline OpsEntityItem& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}


    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const{ return m_content; }

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline void SetContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline void SetContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline OpsEntityItem& WithContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetContent(value); return *this;}

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline OpsEntityItem& WithContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline OpsEntityItem& AddContent(const Aws::Map<Aws::String, Aws::String>& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>The details of an OpsData summary.</p>
     */
    inline OpsEntityItem& AddContent(Aws::Map<Aws::String, Aws::String>&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
