/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/Citation.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>This contains the SiteWise Assistant's response and the corresponding
   * citation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/InvocationOutput">AWS
   * API Reference</a></p>
   */
  class InvocationOutput
  {
  public:
    AWS_IOTSITEWISE_API InvocationOutput();
    AWS_IOTSITEWISE_API InvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text message of the SiteWise Assistant's response.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InvocationOutput& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvocationOutput& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvocationOutput& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of citations, and related information for the SiteWise Assistant's
     * response.</p>
     */
    inline const Aws::Vector<Citation>& GetCitations() const{ return m_citations; }
    inline bool CitationsHasBeenSet() const { return m_citationsHasBeenSet; }
    inline void SetCitations(const Aws::Vector<Citation>& value) { m_citationsHasBeenSet = true; m_citations = value; }
    inline void SetCitations(Aws::Vector<Citation>&& value) { m_citationsHasBeenSet = true; m_citations = std::move(value); }
    inline InvocationOutput& WithCitations(const Aws::Vector<Citation>& value) { SetCitations(value); return *this;}
    inline InvocationOutput& WithCitations(Aws::Vector<Citation>&& value) { SetCitations(std::move(value)); return *this;}
    inline InvocationOutput& AddCitations(const Citation& value) { m_citationsHasBeenSet = true; m_citations.push_back(value); return *this; }
    inline InvocationOutput& AddCitations(Citation&& value) { m_citationsHasBeenSet = true; m_citations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Citation> m_citations;
    bool m_citationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
