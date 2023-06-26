/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The input provided was not valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/InvalidInputException">AWS
   * API Reference</a></p>
   */
  class InvalidInputException
  {
  public:
    AWS_GLUE_API InvalidInputException();
    AWS_GLUE_API InvalidInputException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API InvalidInputException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message describing the problem.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message describing the problem.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message describing the problem.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message describing the problem.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message describing the problem.</p>
     */
    inline InvalidInputException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message describing the problem.</p>
     */
    inline InvalidInputException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing the problem.</p>
     */
    inline InvalidInputException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Indicates whether or not the exception relates to a federated source.</p>
     */
    inline bool GetFromFederationSource() const{ return m_fromFederationSource; }

    /**
     * <p>Indicates whether or not the exception relates to a federated source.</p>
     */
    inline bool FromFederationSourceHasBeenSet() const { return m_fromFederationSourceHasBeenSet; }

    /**
     * <p>Indicates whether or not the exception relates to a federated source.</p>
     */
    inline void SetFromFederationSource(bool value) { m_fromFederationSourceHasBeenSet = true; m_fromFederationSource = value; }

    /**
     * <p>Indicates whether or not the exception relates to a federated source.</p>
     */
    inline InvalidInputException& WithFromFederationSource(bool value) { SetFromFederationSource(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_fromFederationSource;
    bool m_fromFederationSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
