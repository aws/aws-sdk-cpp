/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A lens share summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensShareSummary">AWS
   * API Reference</a></p>
   */
  class LensShareSummary
  {
  public:
    AWS_WELLARCHITECTED_API LensShareSummary();
    AWS_WELLARCHITECTED_API LensShareSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensShareSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }

    
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }

    
    inline LensShareSummary& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline LensShareSummary& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline LensShareSummary& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline LensShareSummary& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline LensShareSummary& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline LensShareSummary& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline LensShareSummary& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline LensShareSummary& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline LensShareSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline LensShareSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Optional message to compliment the Status field.</p>
     */
    inline LensShareSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
