/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>The resource does not exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/EntityNotExistsException">AWS
   * API Reference</a></p>
   */
  class EntityNotExistsException
  {
  public:
    AWS_WORKDOCS_API EntityNotExistsException();
    AWS_WORKDOCS_API EntityNotExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API EntityNotExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline EntityNotExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline EntityNotExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline EntityNotExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIds() const{ return m_entityIds; }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline void SetEntityIds(const Aws::Vector<Aws::String>& value) { m_entityIdsHasBeenSet = true; m_entityIds = value; }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline void SetEntityIds(Aws::Vector<Aws::String>&& value) { m_entityIdsHasBeenSet = true; m_entityIds = std::move(value); }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline EntityNotExistsException& WithEntityIds(const Aws::Vector<Aws::String>& value) { SetEntityIds(value); return *this;}

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline EntityNotExistsException& WithEntityIds(Aws::Vector<Aws::String>&& value) { SetEntityIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline EntityNotExistsException& AddEntityIds(const Aws::String& value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline EntityNotExistsException& AddEntityIds(Aws::String&& value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline EntityNotExistsException& AddEntityIds(const char* value) { m_entityIdsHasBeenSet = true; m_entityIds.push_back(value); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityIds;
    bool m_entityIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
