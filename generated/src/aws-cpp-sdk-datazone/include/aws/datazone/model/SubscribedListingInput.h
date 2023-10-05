/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The published asset for which the subscription grant is to be
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedListingInput">AWS
   * API Reference</a></p>
   */
  class SubscribedListingInput
  {
  public:
    AWS_DATAZONE_API SubscribedListingInput();
    AWS_DATAZONE_API SubscribedListingInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedListingInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline SubscribedListingInput& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline SubscribedListingInput& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the published asset for which the subscription grant is to
     * be created.</p>
     */
    inline SubscribedListingInput& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
