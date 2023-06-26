/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies change details of the domain configuration change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ChangeProgressDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails();
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}


    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
