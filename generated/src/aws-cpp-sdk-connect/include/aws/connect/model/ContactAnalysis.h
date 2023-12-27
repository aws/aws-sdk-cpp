﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Transcript.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure that defines filters can be used to search within outputs
   * analyzed by Amazon Connect Contact Lens in a contact.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactAnalysis">AWS
   * API Reference</a></p>
   */
  class ContactAnalysis
  {
  public:
    AWS_CONNECT_API ContactAnalysis();
    AWS_CONNECT_API ContactAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline ContactAnalysis& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>A structure that defines filters can be used to search with text within an
     * Amazon Connect Contact Lens analyzed transcript.</p>
     */
    inline ContactAnalysis& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}

  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
